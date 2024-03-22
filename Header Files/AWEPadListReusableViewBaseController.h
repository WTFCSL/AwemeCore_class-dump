//
//     Generated by private class-dump
//

@class NSString, AWEPadBaseListSectionController, UIView, AWEPadBaseSectionViewModel;
@protocol NSObject;

@interface AWEPadListReusableViewBaseController : NSObject <AWEPadListReusableViewBreakPoint> {
    BOOL _enableLightMode;
    id _model;
    AWEPadBaseSectionViewModel *_sectionViewModel;
    AWEPadBaseListSectionController *_sectionController;
    long long _index;
    UIView *_view;
    long long _dataType;
}

@property (retain, nonatomic) id model;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) AWEPadBaseSectionViewModel *sectionViewModel;
@property (weak, nonatomic) AWEPadBaseListSectionController *sectionController;
@property (nonatomic) long long index;
@property (readonly, nonatomic) id<NSObject> diffIdentifier;
@property (nonatomic) BOOL enableLightMode;
@property (nonatomic) long long dataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:(id)arg0;
- (double)cellWidthWithCollectionView:(id)arg0;
- (id)sectionViewModel;
- (void)setSectionViewModel:(id)arg0;
- (void)configView:(id)arg0;
- (void)viewDidDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (void)viewDidEndDisplay;
- (BOOL)isViewAvailable;
- (BOOL)isViewMovable;
- (BOOL)enableLightMode;
- (void)setEnableLightMode:(BOOL)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setDataType:(long long)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (Class)viewClass;
- (void)setSectionController:(id)arg0;
- (long long)dataType;
- (void)setView:(id)arg0;
- (id)sectionController;
- (long long)index;
- (id)view;
- (void)didSelectItemAtIndex:(long long)arg0;

@end