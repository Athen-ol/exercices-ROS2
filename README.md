# Exercices ROS2

Ce dépôt contient une série d’exercices pour apprendre et pratiquer le développement avec **ROS 2** en C++.

---

## Utilisation

Pour compiler et exécuter les exercices :

```bash
colcon build
source install/setup.bash
````

Ensuite, lance l’un des exécutables avec :

```bash
ros2 run cpp_pubsub <nom_de_l_exécutable>
```

---

## ⚙️ Liste des exécutables disponibles

| Exercice | Type      | Nom de l’exécutable |
| -------- | --------- | ------------------- |
| Exo 1    | Publisher | `exo1_publisher`    |
| Exo 1    | Listener  | `exo1_listener`     |
| Exo 2    | Publisher | `exo2_publisher`    |
| Exo 3    | Publisher | `exo3_publisher`    |
| Exo 4    | Publisher | `exo4_publisher`    |
| Exo 4    | Listener  | `exo4_listener`     |
| Exo 5    | Listener  | `exo5_listener`     |
| Exo 6    | Publisher | `exo6_publisher`    |
| Exo 7    | Service   | `exo7_server`       |
| Exo 7    | Client    | `exo7_client`       |

---

## 💡 Remarque

Si un exécutable n’existe pas pour un exercice donné, il peut être **remplacé par celui de l’exercice précédent** (par exemple, un listener identique).

---

## 📁 Structure du projet (exemple)

```
cpp_pubsub/
├── src/
│   ├── exo1_publisher.cpp
│   ├── exo1_listener.cpp
│   ├── ...
├── CMakeLists.txt
└── package.xml
```

