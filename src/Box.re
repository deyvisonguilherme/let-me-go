module Primary = {
let component = ReasonReact.statelessComponent("Primary");
let make = (children: array(ReasonReact.reactElement)) => {
    ...component,
    render: _=> 
        <div className="box box-primary"> ...children </div>
    };
};

module Header = {
let component = ReasonReact.statelessComponent("Header");
let make = (children: array(ReasonReact.reactElement)) => {
    ...component,
    render: _=> 
        <div className="box-header with-border"> ...children </div>
    };
};

module Title = {
let component = ReasonReact.statelessComponent("Title");
let make = (~text: string, _children) => {
    ...component,
    render: _=> 
        <h3 className="box-title">(ReasonReact.string(text))</h3>
    };
};

module Body = {
let component = ReasonReact.statelessComponent("Body");
let make = (children: array(ReasonReact.reactElement)) => {
    ...component,
    render: _=> 
        <div className="box-body"> ...children </div>
    };
};

module Footer = {
let component = ReasonReact.statelessComponent("Footer");
let make = (children: array(ReasonReact.reactElement)) => {
    ...component,
    render: _=> 
        <div className="box-footer"> ...children </div>
    };
};

module Row = {
let component = ReasonReact.statelessComponent("Row");
let make = (children: array(ReasonReact.reactElement)) => {
    ...component,
    render: _=> 
        <div className="row"> ...children</div>
    };
};


module Col = {
let component = ReasonReact.statelessComponent("Col");
let make = (~size: int, children: array(ReasonReact.reactElement)) => {
    ...component,
    render: _=> {
            let sizeColumn = Printf.sprintf("col-md-%i", size);
            <div className={sizeColumn}> ...children</div>
        }
    };
};
