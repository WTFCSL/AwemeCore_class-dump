//
//     Generated by private class-dump
//

@class AWEFeedCollectionContainerContext, NSString, AWEAwemeModel, AWEAwemePlayInteractionInteractor;

@interface AWEFeedRelatedItemCellModel : NSObject <AWEListDiffable> {
    BOOL _isJustWatched;
    BOOL _isTitleCut;
    AWEAwemeModel *_model;
    AWEFeedCollectionContainerContext *_containerContext;
    NSString *_displayedTitle;
    AWEAwemePlayInteractionInteractor *_interactor;
}

@property (retain, nonatomic) AWEAwemePlayInteractionInteractor *interactor;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isJustWatched;
@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;
@property (nonatomic) BOOL isTitleCut;
@property (copy, nonatomic) NSString *displayedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)diffIdentifierKey;
- (BOOL)isImageAlbum;
- (BOOL)isJustWatched;
- (id)tagTrackString;
- (BOOL)isTitleCut;
- (id)displayedTitle;
- (double)coverHeightWithWidth:(double)arg0;
- (double)labelHeightWithCellWidth:(double)arg0;
- (id)fontOfDescriptionString;
- (long long)labelMaxLine;
- (void)setIsTitleCut:(BOOL)arg0;
- (void)setDisplayedTitle:(id)arg0;
- (id)usefulDescriptionString;
- (double)spaceOfStackView;
- (id)fontOfLikeCount;
- (double)currentImageRatio;
- (double)usefulDescriptionStringHeightWithCellWidth:(double)arg0;
- (id)getSpecialLabelRangesBySymbolSet:(id)arg0;
- (id)trimmingWhitespaceAndNewline:(id)arg0;
- (id)complementRanges:(id)arg0 wholeRange:(id)arg1;
- (double)insetOfDescriptionString;
- (double)cellHeightWithWidth:(double)arg0;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3;
- (void)setIsJustWatched:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)interactor;
- (long long)tagType;
- (void).cxx_destruct;
- (id)model;
- (void)setInteractor:(id)arg0;
- (BOOL)playable;
- (id)mergeRanges:(id)arg0;
- (id)titleString;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;

@end
