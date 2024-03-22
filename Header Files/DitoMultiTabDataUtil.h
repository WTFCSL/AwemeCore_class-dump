//
//     Generated by private class-dump
//

@class DitoPageContext, NSArray, NSPointerArray, NSMutableDictionary, DitoMultiTabDataModel, DitoBodyContainer, NSString;
@protocol DitoMultiTabDatasourceProtocol, DitoExtensionContainerProtocol, DitoMultiTabContainerProtocol;

@interface DitoMultiTabDataUtil : NSObject <UIGestureRecognizerDelegate, DitoExtensionProtocol, DitoMultiTabDelegateProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    id<DitoMultiTabDatasourceProtocol> _dataSource;
    id<DitoMultiTabContainerProtocol> _multiTabContainer;
    DitoMultiTabDataModel *_lastTabDataModel;
    DitoMultiTabDataModel *_currentTabDataModel;
    NSArray *_validTabModel;
    NSArray *_tabModelInData;
    NSPointerArray *_delegateArray;
    NSMutableDictionary *_tabViewMap;
    double _lastBodyContentOffsetY;
    DitoBodyContainer *_bodyContainer;
    unsigned long long _scrollState;
}

@property (copy, nonatomic) NSArray *validTabModel;
@property (copy, nonatomic) NSArray *tabModelInData;
@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (retain, nonatomic) NSMutableDictionary *tabViewMap;
@property (nonatomic) double lastBodyContentOffsetY;
@property (weak, nonatomic) DitoBodyContainer *bodyContainer;
@property (nonatomic) unsigned long long scrollState;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (weak, nonatomic) id<DitoMultiTabDatasourceProtocol> dataSource;
@property (weak, nonatomic) id<DitoMultiTabContainerProtocol> multiTabContainer;
@property (retain, nonatomic) DitoMultiTabDataModel *lastTabDataModel;
@property (retain, nonatomic) DitoMultiTabDataModel *currentTabDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegateArray;
- (void)setDelegateArray:(id)arg0;
- (BOOL)scrollViewDidReachBottom:(id)arg0;
- (id)multiTabContainer;
- (void)pageDidScroll:(id)arg0;
- (void)pageWillBeginDragging:(id)arg0;
- (void)initializeExtension;
- (void)addMultiTabDelegate:(id)arg0;
- (void)DitoMultiTabContainer:(id)arg0 willMoveToTabModel:(id)arg1 fromTabModel:(id)arg2;
- (void)DitoMultiTabContainerDidScroll:(id)arg0;
- (void)DitoMultiTabContainer:(id)arg0 didMoveToTabModel:(id)arg1;
- (void)DitoMultiTabContainer:(id)arg0 didMoveToTabModel:(id)arg1 fromTabModel:(id)arg2;
- (void)interruptGesture:(id)arg0;
- (id)bodyContainer;
- (void)setBodyContainer:(id)arg0;
- (id)validTabModel;
- (id)tabModelInData;
- (id)tabViewControllerWithTabData:(id)arg0;
- (void)setValidTabModel:(id)arg0;
- (id)fetchValidTabPageModel;
- (id)keyForTabData:(id)arg0;
- (id)tabViewMap;
- (void)setTabModelInData:(id)arg0;
- (id)currentTabDataModel;
- (id)fetchSubTabScrollViewWithVC:(id)arg0;
- (id)fetchCurrentSubTabScrollView;
- (double)lastBodyContentOffsetY;
- (double)scrollViewMaxContentOffset:(id)arg0;
- (void)setLastBodyContentOffsetY:(double)arg0;
- (id)tabViewControllerWithIndex:(long long)arg0;
- (id)tabDataForKey:(id)arg0;
- (void)configWithPageDatas:(id)arg0;
- (void)configWithStripDatas:(id)arg0;
- (void)setMultiTabContainer:(id)arg0;
- (id)lastTabDataModel;
- (void)setLastTabDataModel:(id)arg0;
- (void)setCurrentTabDataModel:(id)arg0;
- (void)setTabViewMap:(id)arg0;
- (id)container;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (unsigned long long)scrollState;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)context;
- (void)clear;
- (void)setScrollState:(unsigned long long)arg0;

@end
