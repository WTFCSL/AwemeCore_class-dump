//
//     Generated by private class-dump
//

@class NSArray, NSString, HTSLiveApi, NSDictionary, IESLiveInteractivePanelView, UITableView;

@interface IESLiveInteractionChatGroupUserListController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSString *_groupID;
    NSDictionary *_extraParams;
    HTSLiveApi *_api;
    IESLiveInteractivePanelView *_containerView;
    UITableView *_tableView;
    NSArray *_items;
    NSString *_enterFrom;
    NSString *_enterMethod;
}

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) IESLiveInteractivePanelView *containerView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)renderItems:(id)arg0;
- (void)enterRoomWithID:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void)setItems:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)items;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setContainerView:(id)arg0;
- (void)fetchData;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end