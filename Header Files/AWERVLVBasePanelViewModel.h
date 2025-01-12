//
//     Generated by private class-dump
//

@class AWERVDetailPageContext, UIViewController;

@interface AWERVLVBasePanelViewModel : NSObject {
    AWERVDetailPageContext *_pageContext;
    UIViewController *_container;
}

@property (readonly, nonatomic) AWERVDetailPageContext *pageContext;
@property (weak, nonatomic) UIViewController *container;

- (id)panelID;
- (void)panelDidLoad;
- (void)panelWillAppear;
- (void)panelDidAppear;
- (void)panelDidDisAppear;
- (void)containerDidLayoutSubviews;
- (id)container;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)pageContext;

@end
