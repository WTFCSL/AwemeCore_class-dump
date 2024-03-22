//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel, NSString, AWEPadPolymericChannelDataController;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadRefreshHeaderViewController : AWEPadListReusableViewBaseController {
    NSString *_title;
    NSString *_pageKey;
    long long _refreshCount;
    AWEPadPolymericChannelDataController *_dataController;
}

@property (retain, nonatomic) AWEPadPolymericChannelDataController *dataController;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *pageKey;
@property (nonatomic) long long refreshCount;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setDataController:(id)arg0;
- (id)pageKey;
- (void)setPageKey:(id)arg0;
- (void)configView:(id)arg0;
- (void)trackRefreshClick;
- (void).cxx_destruct;
- (Class)viewClass;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)dataController;
- (long long)refreshCount;
- (void)setRefreshCount:(long long)arg0;

@end
