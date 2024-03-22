//
//     Generated by private class-dump
//

@class NSNumber, AWEAwemeModel;
@protocol AFDRichContentHandlerProtocol, AFDRichContentBaseSectionViewModelProtocol;

@protocol AFDRichContentListViewModelProtocol <NSObject>

@property (nonatomic, readonly) id<AFDRichContentHandlerProtocol> listContentHandler;
@property (nonatomic, readonly) id<AFDRichContentBaseSectionViewModelProtocol> currentSectionVM;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic, readonly) long long sectionCount;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic, retain) NSNumber *currentDotFromCenter;
@property (nonatomic, readonly) long long currentSectionIndex;
@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic) BOOL enableEnteringProfile;
@property (nonatomic) BOOL isFrameAnimationActive;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)cycleUpdateCurrentSectionIndexBy:(long long)arg0;
- (void)cycleUpdateCurrentSectionIndexBy:(long long)arg0;
- (long long)currentSectionIndex;
- (id)currentDotFromCenter;
- (void)createFinishTrackTriggerIfNeeded;
- (void)transferFinishTrackTriggerTo:(id)arg0;
- (void)transferFinishTrackTriggerTo:(id)arg0;
- (void)resetFinishTrackTrigger;
- (void)playByClick:(BOOL)arg0;
- (void)playByClick:(BOOL)arg0;
- (BOOL)enableEnteringProfile;
- (void)setEnableEnteringProfile:(BOOL)arg0;
- (BOOL)isFrameAnimationActive;
- (void)setIsFrameAnimationActive:(BOOL)arg0;
- (id)currentSectionVM;
- (long long)sectionIndexWithAwemeModel:(id)arg0;
- (long long)sectionIndexWithAwemeModel:(id)arg0;
- (id)listContentHandler;
- (void)trackMultiGroupSlideWithCurrentIndex:(long long)arg0 withMethod:(unsigned long long)arg1;
- (void)trackMultiGroupSlideWithCurrentIndex:(long long)arg0 withMethod:(unsigned long long)arg1;
- (void)trackDiaryFolderSlideFromIndex:(long long)arg0 toIndex:(long long)arg1 withMethod:(unsigned long long)arg2;
- (void)trackDiaryFolderSlideFromIndex:(long long)arg0 toIndex:(long long)arg1 withMethod:(unsigned long long)arg2;
- (void)setCurrentDotFromCenter:(id)arg0;
- (void)pauseByClick:(BOOL)arg0;
- (void)pauseByClick:(BOOL)arg0;
- (id)indexPathFrom:(long long)arg0;
- (id)indexPathFrom:(long long)arg0;
- (long long)indexFrom:(long long)arg0;
- (long long)indexFrom:(long long)arg0;
- (long long)currentIndex;
- (long long)sectionCount;

@end
