
[%raw {|require('./main.js')|}]

ReactDOMRe.renderToElementWithId(<Component1 message="Hello! Click this text." />, "index1");

ReactDOMRe.renderToElementWithId(<Component2 greeting="Hello!" />, "index2");

ReactDOMRe.renderToElementWithId(<Simple message="Hello"/>, "index3");

ReactDOMRe.renderToElementWithId(ReasonReact.element(Greeting.make(~name="Deyvison Guilherme!", [||])), "index4");
