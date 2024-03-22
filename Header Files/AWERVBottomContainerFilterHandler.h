//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEAwemeModel, NSPointerArray, NSNumber, AWEBaseElement;

@interface AWERVBottomContainerFilterHandler : NSObject <AWEPlayInteractionContainerFilterProtocol> {
    NSMutableDictionary *_priorityElementDic;
    AWEAwemeModel *_model;
    NSString *_referString;
    NSPointerArray *_currentAppearElements;
    NSNumber *_currentShownPriority;
}

@property (retain, nonatomic) NSMutableDictionary *priorityElementDic;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSPointerArray *currentAppearElements;
@property (retain, nonatomic) NSNumber *currentShownPriority;
@property (readonly, weak, nonatomic) AWEBaseElement *currentShownElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)currentShownElement;
- (void)addElementInPriorityDic:(id)arg0;
- (void)updateElementStatus:(long long)arg0 ignoreElement:(id)arg1 before:(id /* block */)arg2 appear:(id /* block */)arg3 shouldAppear:(id /* block */)arg4;
- (id)currentShownPriority;
- (id)priorityElementDic;
- (id)currentAppearElements;
- (id)getPriorityWithElement:(id)arg0;
- (id)getAppearElementWithModel:(id)arg0 elements:(id)arg1 shouldSetAppear:(BOOL)arg2 ignoreElement:(id)arg3;
- (void)resetElement:(id)arg0;
- (void)setCurrentShownPriority:(id)arg0;
- (void)setCurrentAppearElements:(id)arg0;
- (id)allowShowElementNames;
- (BOOL)element:(id)arg0 inAllowList:(id)arg1;
- (void)checkElementStatus:(id)arg0 model:(id)arg1 appear:(id /* block */)arg2 disappear:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)addObjectInArray:(id)arg0 forKey:(id)arg1 dictionary:(id)arg2;
- (id)intersectionArray:(id)arg0 compareArray:(id)arg1;
- (void)filterElementAppearWithModel:(id)arg0 referString:(id)arg1;
- (void)updateTopAppearElementAndHideOthers:(id)arg0;
- (BOOL)hasIntersectionArray:(id)arg0 compareArray:(id)arg1;
- (void)setPriorityElementDic:(id)arg0;
- (void)setModel:(id)arg0;
- (void)addElement:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)resetData;

@end