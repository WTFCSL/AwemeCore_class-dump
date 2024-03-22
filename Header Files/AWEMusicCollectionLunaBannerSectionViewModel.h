//
//     Generated by private class-dump
//

@class AWEMusicLunaGuideBarView, NSDictionary, NSString;

@interface AWEMusicCollectionLunaBannerSectionViewModel : NSObject <AWEMusicCollectionSectionViewModelProtocol> {
    id /* block */ _bannerDidClick;
    AWEMusicLunaGuideBarView *_lunaBannerView;
    unsigned long long _bannerStyle;
    NSDictionary *_eventParams;
}

@property (retain, nonatomic) AWEMusicLunaGuideBarView *lunaBannerView;
@property (nonatomic) unsigned long long bannerStyle;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) id /* block */ bannerDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEventParams:(id)arg0;
- (id)lunaBannerView;
- (id)cellViewModelArray;
- (id)sectionFooterView;
- (void)setLunaBannerView:(id)arg0;
- (id)initWithStyle:(unsigned long long)arg0 params:(id)arg1;
- (void)updateContentWithTitle:(id)arg0 subTitle:(id)arg1 mainButtonTitle:(id)arg2;
- (void)setBannerDidClick:(id /* block */)arg0;
- (void)updateContentWithSongsCount:(long long)arg0 isCurrentUser:(BOOL)arg1;
- (id /* block */)bannerDidClick;
- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (id)init;
- (void)setBannerStyle:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)bannerStyle;
- (long long)numberOfRows;
- (id)sectionHeaderView;
- (id)eventParams;

@end