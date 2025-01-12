//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEHPTopTabEditPanelConfig : NSObject {
    BOOL _canShowRecommendSortList;
    BOOL _needHaptic;
    NSArray *_itemList;
    NSArray *_serverSortItemList;
    id /* block */ _clickSaveCallback;
    id /* block */ _dismissCallback;
    id /* block */ _clickOneSortBtnCallback;
    id /* block */ _currentChannelID;
    NSString *_enterMethod;
}

@property (retain, nonatomic) NSArray *itemList;
@property (retain, nonatomic) NSArray *serverSortItemList;
@property (copy, nonatomic) id /* block */ clickSaveCallback;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ clickOneSortBtnCallback;
@property (nonatomic) BOOL canShowRecommendSortList;
@property (copy, nonatomic) id /* block */ currentChannelID;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needHaptic;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg0;
- (void)setCurrentChannelID:(id /* block */)arg0;
- (void)setCanShowRecommendSortList:(BOOL)arg0;
- (void)setClickOneSortBtnCallback:(id /* block */)arg0;
- (void)setServerSortItemList:(id)arg0;
- (id)serverSortItemList;
- (void)setClickSaveCallback:(id /* block */)arg0;
- (id /* block */)clickSaveCallback;
- (id /* block */)clickOneSortBtnCallback;
- (BOOL)canShowRecommendSortList;
- (BOOL)needHaptic;
- (void)setNeedHaptic:(BOOL)arg0;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:(id)arg0;
- (id /* block */)currentChannelID;

@end
