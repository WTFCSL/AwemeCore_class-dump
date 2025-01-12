//
//     Generated by private class-dump
//

@class IESLiveFilterViewModel, IESLiveSlideBeautyViewModel;

@interface IESLiveBeautyHelper : NSObject {
    IESLiveFilterViewModel *_filterViewModel;
    IESLiveSlideBeautyViewModel *_beautyViewModel;
}

@property (retain, nonatomic) IESLiveFilterViewModel *filterViewModel;
@property (retain, nonatomic) IESLiveSlideBeautyViewModel *beautyViewModel;

- (id)beautyViewModel;
- (void)setBeautyViewModel:(id)arg0;
- (void)loadBeauty;
- (void)reloadBeautyEffect;
- (id)filterViewModel;
- (void)setFilterViewModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end
