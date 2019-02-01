
let component = ReasonReact.statelessComponent("Page");
let make = (_) => {
    ...component,
    render: _self => {
        <div>
            <MainHeader  />
            <MainSidebar />
            <ContentWrapper.PanelContent />
        </div>
    }
};
