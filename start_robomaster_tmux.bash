#!/bin/bash

WORKSPACE="${ROBOMASTER_WS:-$HOME/Robomaster_WS}"
SLAM_PARAMS="$WORKSPACE/src/robomaster_ros/robomaster_ros/config/mapper_params_online_async.yaml"
NAV2_PARAMS="$WORKSPACE/params/nav2_params.yaml"

cd "$WORKSPACE"
colcon build
source install/setup.bash

SESSION="robomaster"

tmux new-session -d -s "$SESSION"

# Pannello 1 - SLLiDAR
tmux send-keys -t "$SESSION" "ros2 launch sllidar_ros2 sllidar_c1_launch.py" C-m

# Pannello 2 - SLAM Toolbox
tmux split-window -h -t "$SESSION"
tmux send-keys -t "$SESSION" "ros2 launch slam_toolbox online_async_launch.py slam_params_file:=$SLAM_PARAMS use_sim_time:=false" C-m

# Pannello 3 - Explore Lite
tmux split-window -v -t "$SESSION:0.0"
tmux send-keys -t "$SESSION" "ros2 launch explore_lite explore.launch.py" C-m

# Pannello 4 - RoboMaster
tmux split-window -v -t "$SESSION:0.0"
tmux send-keys -t "$SESSION" "ros2 launch robomaster_ros ep.launch" C-m

# Pannello 5 - Nav2
tmux split-window -v -t "$SESSION:0.3"
tmux send-keys -t "$SESSION" "ros2 launch nav2_bringup navigation_launch.py use_sim_time:=false params_file:=$NAV2_PARAMS" C-m

# Attacca tmux in foreground
tmux attach -t "$SESSION"

read -p "Premi Invio per terminare tutti i processi ROS..."

echo "Terminazione in corso..."
for i in {0..4}; do
    tmux send-keys -t "$SESSION:0.$i" C-c
    sleep 0.1
done

tmux kill-session -t "$SESSION" 2>/dev/null && echo "Tutti i terminali Robomaster chiusi."