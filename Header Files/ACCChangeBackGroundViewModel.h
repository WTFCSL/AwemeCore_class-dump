//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCChangeBackGroundViewModel : NSObject <ACCChangeBackGroundService> {
    BOOL showChangeBackGroundItem;
    id<ACCSequenceEditServiceProtocol> _sequenceService;
    id<ACCEditServiceProtocol> _editService;
    AWEVideoPublishViewModel *_repository;
    long long _currentIndex;
    NSMutableArray *_colorList;
}

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSMutableArray *colorList;
@property (nonatomic) BOOL showChangeBackGroundItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)editService;
- (void)setEditService:(id)arg0;
- (id)sequenceService;
- (void)setSequenceService:(id)arg0;
- (void)initColorConfig;
- (void)changeToUpperColor;
- (void)changeToNextBackground;
- (BOOL)applyNotBlackColor;
- (void)cacheApplyNotBlackColor;
- (BOOL)ifDefaultUpperColor;
- (void)setBlackColorCache;
- (BOOL)showChangeBackGroundItem;
- (void)setShowChangeBackGroundItem:(BOOL)arg0;
- (id)initWithSequenceService:(id)arg0 editService:(id)arg1 publishModel:(id)arg2;
- (void)changeToCurrentIndex;
- (void)setColorList:(id)arg0;
- (id)colorList;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg0;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
