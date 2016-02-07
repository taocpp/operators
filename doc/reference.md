<table>

  <tr>
    <th>Template<br>Overview</th><th>Provides</th><th>Requires</th>
  </tr>

  <!-- equality_comparable -->
  <tr valign="top">
    <td>
      <code>equality_comparable&lt;&nbsp;T&nbsp;&gt;</code><br>
    </td><td>
      <code>bool&nbsp;operator!=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;==&nbsp;t1&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>equality_comparable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator!=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>bool&nbsp;operator==(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator!=(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;==&nbsp;u&nbsp;)</code>
    </td>
  </tr>

  <!-- less_than_comparable -->
  <tr valign="top">
    <td>
      <code>less_than_comparable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator&gt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code>
      <code>bool&nbsp;operator&lt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code>
      <code>bool&nbsp;operator&gt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&lt;&nbsp;t1&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>less_than_comparable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator&lt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>bool&nbsp;operator&lt;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator&lt;=(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;=(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&lt;&nbsp;u&nbsp;)</code><br>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&gt;&nbsp;u&nbsp;)</code>
    </td>
  </tr>

  <!-- equivalent -->
  <tr valign="top">
    <td>
      <code>equivalent&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator==(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&lt;&nbsp;t1&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>equivalent&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator==(&nbsp;const T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&lt;&nbsp;u&nbsp;)</code><br>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&gt;&nbsp;u&nbsp;)</code>
    </td>
  </tr>

  <!-- partially_ordered -->
  <tr valign="top">
    <td>
      <code>partially_ordered&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator&gt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>bool&nbsp;operator&lt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&lt;&nbsp;t1&nbsp;)</code><br>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;==&nbsp;t1&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>partially_ordered&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>bool&nbsp;operator&lt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;=(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>bool&nbsp;operator&lt;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator&lt;=(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>bool&nbsp;operator&gt;=(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&lt;&nbsp;u&nbsp;)</code><br>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;&gt;&nbsp;u&nbsp;)</code><br>
      <code>static_cast&lt;&nbsp;bool&nbsp;&gt;(&nbsp;t&nbsp;==&nbsp;u&nbsp;)</code>
    </td>
  </tr>

  <tr>
    <th>Template</th><th>Provides</th><th>Requires</th>
  </tr>

  <!-- addable -->
  <tr valign="top">
    <td>
      <code>commutative_addable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;+=&nbsp;t</code><br>
      <code>tmp&nbsp;+=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>commutative_addable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;+=&nbsp;u</code><br>
      <code>tmp&nbsp;+=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>addable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;+=&nbsp;t</code><br>
      <code>tmp&nbsp;+=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>addable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator+(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;+=&nbsp;u</code><br>
      <code>tmp&nbsp;+=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>addable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator+(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;+=&nbsp;t</code><br>
      <code>tmp&nbsp;+=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <!-- subtractable -->
  <tr valign="top">
    <td>
      <code>subtractable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator-(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator-(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator-(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator-(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;-=&nbsp;t</code><br>
      <code>tmp&nbsp;-=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>subtractable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator-(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator-(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator-(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator-(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;-=&nbsp;u</code><br>
      <code>tmp&nbsp;-=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>subtractable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator-(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator-(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator-(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator-(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;-=&nbsp;t</code><br>
      <code>tmp&nbsp;-=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <!-- multipliable -->
  <tr valign="top">
    <td>
      <code>commutative_multipliable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;*=&nbsp;t</code><br>
      <code>tmp&nbsp;*=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>commutative_multipliable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;*=&nbsp;u</code><br>
      <code>tmp&nbsp;*=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>multipliable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;*=&nbsp;t</code><br>
      <code>tmp&nbsp;*=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>multipliable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator*(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;*=&nbsp;u</code><br>
      <code>tmp&nbsp;*=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>multipliable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator*(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;*=&nbsp;t</code><br>
      <code>tmp&nbsp;*=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <!-- dividable -->
  <tr valign="top">
    <td>
      <code>dividable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator/(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator/(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator/(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator/(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;/=&nbsp;t</code><br>
      <code>tmp&nbsp;/=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>dividable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator/(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator/(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator/(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator/(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;/=&nbsp;u</code><br>
      <code>tmp&nbsp;/=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>dividable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator/(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator/(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator/(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator/(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;/=&nbsp;t</code><br>
      <code>tmp&nbsp;/=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <!-- modable -->
  <tr valign="top">
    <td>
      <code>modable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator%(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator%(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator%(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator%(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;%=&nbsp;t</code><br>
      <code>tmp&nbsp;%=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>modable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator%(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator%(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator%(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator%(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;%=&nbsp;u</code><br>
      <code>tmp&nbsp;%=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>modable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator%(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator%(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator%(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator%(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;%=&nbsp;t</code><br>
      <code>tmp&nbsp;%=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <tr>
    <th>Template</th><th>Provides</th><th>Requires</th>
  </tr>

  <!-- andable -->
  <tr valign="top">
    <td>
      <code>commutative_andable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;t</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>commutative_andable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;u</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>andable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;t</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>andable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&amp;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;u</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>andable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator&amp;(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;t</code><br>
      <code>tmp&nbsp;&amp;=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <!-- orable -->
  <tr valign="top">
    <td>
      <code>commutative_orable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;|=&nbsp;t</code><br>
      <code>tmp&nbsp;|=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>commutative_orable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;|=&nbsp;u</code><br>
      <code>tmp&nbsp;|=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>orable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;|=&nbsp;t</code><br>
      <code>tmp&nbsp;|=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>orable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator|(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;|=&nbsp;u</code><br>
      <code>tmp&nbsp;|=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>orable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator|(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;|=&nbsp;t</code><br>
      <code>tmp&nbsp;|=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <!-- xorable -->
  <tr valign="top">
    <td>
      <code>commutative_xorable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;^=&nbsp;t</code><br>
      <code>tmp&nbsp;^=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>commutative_xorable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;^=&nbsp;u</code><br>
      <code>tmp&nbsp;^=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>xorable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;^=&nbsp;t</code><br>
      <code>tmp&nbsp;^=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>xorable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator^(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;^=&nbsp;u</code><br>
      <code>tmp&nbsp;^=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>xorable_left&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;const&nbsp;U&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;const&nbsp;T&amp;&nbsp;t&nbsp;)</code><br>
      <code>T&nbsp;operator^(&nbsp;U&amp;&amp;&nbsp;u,&nbsp;T&amp;&amp;&nbsp;t&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;tmp(&nbsp;std::move(&nbsp;u&nbsp;)&nbsp;)</code><br>
      <code>tmp&nbsp;^=&nbsp;t</code><br>
      <code>tmp&nbsp;^=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr>

  <tr>
    <th>Template</th><th>Provides</th><th>Requires</th>
  </tr>

  <!-- left_shiftable -->
  <tr valign="top">
    <td>
      <code>left_shiftable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&lt;&lt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator&lt;&lt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&lt;&lt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&lt;&lt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&lt;&lt;=&nbsp;t</code><br>
      <code>tmp&nbsp;&lt;&lt;=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>left_shiftable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&lt;&lt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator&lt;&lt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&lt;&lt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&lt;&lt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&lt;&lt;=&nbsp;u</code><br>
      <code>tmp&nbsp;&lt;&lt;=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr>

  <!-- right_shiftable -->
  <tr valign="top">
    <td>
      <code>right_shiftable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&gt;&gt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&nbsp;operator&gt;&gt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&gt;&gt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;T&amp;&nbsp;t1&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&gt;&gt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;T&amp;&amp;&nbsp;t1&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&gt;&gt;=&nbsp;t</code><br>
      <code>tmp&nbsp;&gt;&gt;=&nbsp;std::move(&nbsp;t&nbsp;)</code>
    </td>
  </tr><tr valign="top">
    <td>
      <code>right_shiftable&lt;&nbsp;T,&nbsp;U&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator&gt;&gt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&nbsp;operator&gt;&gt;(&nbsp;const&nbsp;T&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&gt;&gt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;const&nbsp;U&amp;&nbsp;u&nbsp;)</code><br>
      <code>T&amp;&amp;&nbsp;operator&gt;&gt;(&nbsp;T&amp;&amp;&nbsp;t,&nbsp;U&amp;&amp;&nbsp;u&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>tmp&nbsp;&gt;&gt;=&nbsp;u</code><br>
      <code>tmp&nbsp;&gt;&gt;=&nbsp;std::move(&nbsp;u&nbsp;)</code>
    </td>
  </tr>

  <tr>
    <th>Template</th><th>Provides</th><th>Requires</th>
  </tr>

  <!-- incrementable -->
  <tr valign="top">
    <td>
      <code>incrementable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator++(&nbsp;T&amp;&nbsp;t,&nbsp;int&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>++t</code>
    </td>
  </tr>

  <!-- decrementable -->
  <tr valign="top">
    <td>
      <code>decrementable&lt;&nbsp;T&nbsp;&gt;</code>
    </td><td>
      <code>T&nbsp;operator--(&nbsp;T&amp;&nbsp;t,&nbsp;int&nbsp;)</code>
    </td><td>
      <code>T&nbsp;tmp(&nbsp;t&nbsp;)</code><br>
      <code>--t</code>
    </td>
  </tr>

</table>
