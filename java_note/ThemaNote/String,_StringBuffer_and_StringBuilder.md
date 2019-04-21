## String, StringBuffer 그리고 StringBuilder



## 1. 개요

---

* #### 공통점

이들의 공통점은 문자열을 저장하고 관리하는 클래스라는 것이다. 

> 왜 같이 문자열을 저장하고 관리하는 클래스인데 3개로 나누어 클래스를 만들었을까? 

## 2. String 

---

* String은 immutable(불변)하다. 

쉽게 말해 String은 new연산을 통해 생성되면 그 인스턴스의 메모리 공간은 절대 변하지 않는다는 것이다. 

> 그래서 '+' 연산이나 concat을 이용해서 문자열에 변화를 줘도 메모리 공간이 변하는 것이 아니라 새로운 String 객체를 new로 만들어서 새로운 메모리 공간을 만드는 것이다. 

그 외에 StringBuffer, StringBuilder은 mutable(가변)적인 특징을 가지고 있다. 

> 추론: 문자열이 가변적일 필요가 있기 때문에 String외에 추가적으로 StringBuffer와 StringBuilder을 만든 것이다. 

* 계속해서 새로운 문자열은 새로운 객체를 만들고 기존 문자열은 가비지 콜렉터에 의해 제거야 되는 문제점이 생긴다. (가비지 콜렉터를 돌리는 것은 효율에 있어서 cpu에 영향을 준다.)

* 또한 이런 문자열 연산이 많아질 때 **계속해서 객체를 만드는 오버헤드**가 발생하므로 성능이 떨어질 수 있다. 

* #### 장점

  * String 클래스의 객체는 불변하기 때문에 단순하게 읽어가는 조회연산에서는 다른 클래스보다 빠르게 읽을 수 있다는 장점이 있다. 

#### 결론 : String 클래스는 문자열 연산이 적고 조회가 많을 때 또는 멀티쓰레드 환경에서 사용하기 좋다. 



## 3. StringBuffer와 StringBuilder

---

* String과 다르게 mutable(가변)하다. 

즉 문자열 연산에 있어서 클래스를 한번만 만들고, 연산이 필요할 때 크기를 변경시켜서 문자열을 변경한다. 그러므로 문자열 연산이 자주 있을 때 사용하면 성능이 좋다. 

* 둘은 메소드들이 같아서 서로 호환이 가능하다. 

* ### 차이점

  * StringBuffer는 멅리쓰레드 환경에서 synchronized 키워드가 사용 가능하다. 즉 thread-safe하다
  * StringBuilder는 synchronized를 지원하지 않기 때문에 멀티쓰레드 환경에서 적합하지 않다. 

  대신 동기화를 고려하지 않기 때문에 싱글쓰레드에서는 StringBuilder가 성능이 훨씬 좋다. 

* ### 결론 

  * 문자열 연산이 많을 때 멀티쓰레드 환경에서는 StringBuffer, 싱글쓰레드 또는 쓰레드를 신경쓰지 않아도 되는 환경에서는 StringBuilder를 사용하는 것이 적합하다. 
  * 그러나 synchronized 정책에 따라 동기화는 시스템이 정해주는 것이 아니라 사용자가 직접 정하는 것이다. 그렇기 때문에 StringBuffer는 잘 사용하지 않는다. 

  