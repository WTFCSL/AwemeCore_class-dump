//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDouPlusShareChannel : AWEShareBaseChannel <AWEShareItemDelegate> {
    BOOL _itemBreaths;
    long long _index;
    long long _originalIndex;
}

@property (nonatomic) BOOL itemBreaths;
@property (nonatomic) long long index;
@property (nonatomic) long long originalIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareImage;
- (void)shareItem:(id)arg0 willAppear:(BOOL)arg1;
- (BOOL)shouldShowLocalPromotionEntrance;
- (BOOL)shouldShowDouPlusNewEntrance;
- (id)p_getImageFromGeckoWithName:(id)arg0;
- (id)p_shareDefaultImage;
- (id)makeItemWithStyle:(unsigned long long)arg0 inView:(id)arg1;
- (BOOL)shouldMoveDouPlusIconToFifthPlace:(id)arg0;
- (BOOL)prepareToShare;
- (id)fetchLocalPromotionTrackParams:(long long)arg0;
- (id)getClickDouPlusTrackParamsNewEntrance:(BOOL)arg0;
- (BOOL)itemBreaths;
- (id)getDouPlusShowClickTrackParams;
- (void)handleLocalPromotion;
- (void)requestDouPlusXiaoDianCheckWithModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)setItemBreaths:(BOOL)arg0;
- (void)checkTargetIndexWithContext:(id)arg0;
- (void)updateChannelOriginalIndex:(long long)arg0 realIndex:(long long)arg1;
- (BOOL)share;
- (void)setIndex:(long long)arg0;
- (long long)index;
- (long long)originalIndex;
- (void)setOriginalIndex:(long long)arg0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end
