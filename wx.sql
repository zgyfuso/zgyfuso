-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: localhost    Database: wx
-- ------------------------------------------------------
-- Server version	8.0.27

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `class`
--

DROP TABLE IF EXISTS `class`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `class` (
  `id` int unsigned NOT NULL AUTO_INCREMENT,
  `class` varchar(30) DEFAULT NULL,
  `num` int DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `class`
--

LOCK TABLES `class` WRITE;
/*!40000 ALTER TABLE `class` DISABLE KEYS */;
INSERT INTO `class` VALUES (1,'计算机科学与技术',2),(2,'大数据',3),(3,'计算机科学与技术',2),(4,'小学教育',0),(5,'null',0),(6,'null',0),(7,'视觉传达设计',0),(8,'计算机科学与技术',0),(9,'zxcva',0);
/*!40000 ALTER TABLE `class` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `class_student`
--

DROP TABLE IF EXISTS `class_student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `class_student` (
  `class` varchar(20) DEFAULT NULL,
  `student_name` varchar(20) DEFAULT NULL,
  `student_num` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `class_student`
--

LOCK TABLES `class_student` WRITE;
/*!40000 ALTER TABLE `class_student` DISABLE KEYS */;
INSERT INTO `class_student` VALUES ('undefined','undefined','undefined'),('undefined','undefined','undefined'),('undefined','undefined','undefined'),('null','undefined','123456'),('2020','zhu','20204612089'),('2020','zhu','20204612089'),('null','undefined','123456'),('null','undefined','123456'),('null','undefined','123456'),('null','undefined','123456'),('撒饿饭','主管教育','额外发'),('undefined','undefined','123456'),('null','undefined','123456'),('null','sdasdf','sg'),('大数据','undefined','123456'),('大数据','朱冠宇——','20204612089'),('小学教育','undefined','123456'),('计算机科学与技术','undefined','123456'),('计算机科学与技术','undefined','123456'),('计算机科学与技术','undefined','123456'),('大数据','sdfg','sg'),('计算机科学与技术','undefined','123456'),('计算机科学与技术','undefined','123456'),('计算机科学与技术','undefined','123456'),('计算机科学与技术','undefined','123456'),('null','undefined','123456');
/*!40000 ALTER TABLE `class_student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `student_message`
--

DROP TABLE IF EXISTS `student_message`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `student_message` (
  `id` int unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(20) DEFAULT NULL,
  `sex` varchar(20) DEFAULT NULL,
  `class` varchar(30) DEFAULT NULL,
  `office` varchar(20) DEFAULT NULL,
  `num` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=22 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student_message`
--

LOCK TABLES `student_message` WRITE;
/*!40000 ALTER TABLE `student_message` DISABLE KEYS */;
INSERT INTO `student_message` VALUES (1,'朱','男','计算机','无','20204612089'),(2,'朱冠宇','男','计算机科学与技术','无','20204612089'),(3,'李佳芮','女','会计','无','1231131'),(4,'小天才','男','翻斗花园二班','无','12313'),(5,'周周泽宇','男','计算机科学与技术','无','202046120999'),(6,'周治农','男','数学与应用数学','班长','2002013130'),(7,'afds','srg','sgf','sg','s'),(8,'主管关于','男','阿飞','双方的','21'),(9,'朱冠宇','男','计算机科学与技术','无','20204612089'),(10,'sdfg','sdgf','sdgf','sgd','sg'),(11,'zhu','nan','2020','wu','20204612089'),(12,'主管教育','二分','撒饿饭','二十发','额外发'),(13,'undefined','non','null','null','123456'),(14,'undefined','non','null','null','123456'),(15,'sdasdf','sg','sg','sg','sg'),(16,'undefined','non','null','null','123456'),(17,'undefined','non','null','null','123456'),(18,'朱冠宇——','男','计算机科学与技术','无','20204612089'),(19,'是否','瑟夫','是否','而无法','而非我'),(20,'是否','瑟夫','是否','而无法','而非我'),(21,'sdfg','sg','qsgre','sgr','sg');
/*!40000 ALTER TABLE `student_message` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-04-23 18:29:37
