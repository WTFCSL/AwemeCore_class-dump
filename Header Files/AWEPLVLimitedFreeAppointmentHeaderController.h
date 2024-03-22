//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel, NSString, AWEPadPolymericChannelDataController;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVLimitedFreeAppointmentHeaderController : AWEPadListReusableViewBaseController {
    NSString *_title;
    NSString *_pageKey;
    AWEPadPolymericChannelDataController *_dataController;
}

@property (retain, nonatomic) AWEPadPolymericChannelDataController *dataController;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageKey;

- (void)setDataController:(id)arg0;
- (id)pageKey;
- (void)setPageKey:(id)arg0;
- (void)configView:(id)arg0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (void).cxx_destruct;
- (Class)viewClass;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)dataController;

@end