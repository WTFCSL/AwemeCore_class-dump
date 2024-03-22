//
//     Generated by private class-dump
//

@class AWEFeedDoubleColumnViewController, AWEBaseListSectionViewModel, NSString, AWEAwemeModel, AWEListDataController, AWEFeedLRUCache;
@protocol AWEFeedDoubleColumnActionDelegate;

@interface AWEFeedDoubleColumnContext : NSObject {
    BOOL _isCellShowOutGuide;
    AWEAwemeModel *_fromModel;
    AWEBaseListSectionViewModel *_temporaryStoreModel;
    NSString *_referString;
    NSString *_enterMethod;
    id<AWEFeedDoubleColumnActionDelegate> _actionDelegate;
    AWEListDataController *_dataController;
    double _offset;
    AWEAwemeModel *_lastClickModel;
    unsigned long long _lastClickTime;
    AWEFeedDoubleColumnViewController *_controller;
    AWEFeedLRUCache *_LRUCache;
}

@property (weak, nonatomic) AWEFeedDoubleColumnViewController *controller;
@property (retain, nonatomic) AWEFeedLRUCache *LRUCache;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (retain, nonatomic) AWEBaseListSectionViewModel *temporaryStoreModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id<AWEFeedDoubleColumnActionDelegate> actionDelegate;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) BOOL isCellShowOutGuide;
@property (nonatomic) double offset;
@property (retain, nonatomic) AWEAwemeModel *lastClickModel;
@property (nonatomic) unsigned long long lastClickTime;

- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)recordAwemeInfoForSearchIfNeeded:(id)arg0;
- (id)getLastShowInfoForSearch;
- (id)temporaryStoreModel;
- (void)setTemporaryStoreModel:(id)arg0;
- (BOOL)isCellShowOutGuide;
- (void)setIsCellShowOutGuide:(BOOL)arg0;
- (id)lastClickModel;
- (void)setLastClickModel:(id)arg0;
- (unsigned long long)lastClickTime;
- (void)setLastClickTime:(unsigned long long)arg0;
- (id)LRUCache;
- (void)setLRUCache:(id)arg0;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (id)actionDelegate;
- (void)setOffset:(double)arg0;
- (id)controller;
- (id)initWithController:(id)arg0;
- (double)offset;
- (void)setActionDelegate:(id)arg0;
- (id)currentViewController;
- (id)dataController;

@end
