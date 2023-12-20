<!DOCTYPE html>
<html>
 <head>
  <title>Calculator</title>
     <script src="C:\Users\deepa\angular-1.8.2\angular.min.js"> 
  </script>
 </head>

 <body>
  <div ng-app="myApp" ng-controller="myCtrl">
<h1>Calculator </h1>
<input type='number' ng-model='num1' placeholder='Enter First Number'>
<input type='number' ng-model='num2' placeholder='Enter Second Number'>
<select ng-model="operator">
<option value='+''>+</option>
<option value='-'>-</option>
<option value='*''>*</option>
<option value='/'>/</option>
</select>
<button ng-click='calculate()''>Calculate</button>
<p>Result: {{result}}</p>
 </div>
<script>
var app = angular.module("myApp", []);
app.controller("myCtrl", function($scope) {
 
$scope.num1 = '';
$scope.num2 = '';
$scope.operator = '';
$scope.result = '';

$scope.calculate = function() {
 switch ($scope.operator) {
 case '+':
 $scope.result =$scope.num1 + $scope.num2;
 		 break;
 case '-':
 		 $scope.result = $scope.num1 - $scope.num2;
 break;
 case '*':
 $scope.result = $scope.num1 * $scope.num2;
 break;
 case '/':
 $scope.result = $scope.num1 / $scope.num2;
 break;
  }
    };
   });
 </script>
</body>
</html>