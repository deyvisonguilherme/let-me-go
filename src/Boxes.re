module BoxPrimary = {
let component = ReasonReact.statelessComponent("BoxPrimary");
let make = (_) => {
    ...component,
    render: _=> 
        <div className="box box-primary" />
    };
};

module BoxHeader = {
let component = ReasonReact.statelessComponent("BoxHeader");
let make = (_) => {
    ...component,
    render: _=> 
        (ReasonReact.string("Conteudo"))
    };
};

module BoxTitle = {
let component = ReasonReact.statelessComponent("BoxTitle");
let make = (_) => {
    ...component,
    render: _=> 
        (ReasonReact.string("Conteudo"))
    };
};

module BoxBody = {
let component = ReasonReact.statelessComponent("BoxBody");
let make = (_) => {
    ...component,
    render: _=> 
        (ReasonReact.string("Conteudo"))
    };
};

module BoxFooter = {
let component = ReasonReact.statelessComponent("BoxFooter");
let make = (_) => {
    ...component,
    render: _=> 
        (ReasonReact.string("Conteudo"))
    };
};

module Row = {
let component = ReasonReact.statelessComponent("Row");
let make = (~childrens) => {
    ...component,
    render: _=> 
        <div className="row"></div>
    };
};


module Col = {
let component = ReasonReact.statelessComponent("Col");
let make = (size) => {
    ...component,
    render: _=> 
        <div className={"col-md" ++ size}></div>
    };
};
