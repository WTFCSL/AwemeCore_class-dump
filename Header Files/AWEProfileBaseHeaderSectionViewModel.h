//
//     Generated by private class-dump
//

@class NSString, AWEProfileBaseContainerContext;

@interface AWEProfileBaseHeaderSectionViewModel : AWEBaseListSectionViewModel {
    BOOL _showTabBubble;
    double _profileHeaderHeight;
    AWEProfileBaseContainerContext *_context;
    NSString *_tabBubbleText;
    long long _tabBubbleIndex;
}

@property (retain, nonatomic) AWEProfileBaseContainerContext *context;
@property (nonatomic) double profileHeaderHeight;
@property (nonatomic) BOOL showTabBubble;
@property (copy, nonatomic) NSString *tabBubbleText;
@property (nonatomic) long long tabBubbleIndex;

+ (id)viewModel;

- (void)setTabBubbleText:(id)arg0;
- (void)setTabBubbleIndex:(long long)arg0;
- (void)setShowTabBubble:(BOOL)arg0;
- (void)setProfileHeaderHeight:(double)arg0;
- (double)profileHeaderHeight;
- (BOOL)showTabBubble;
- (id)tabBubbleText;
- (long long)tabBubbleIndex;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)updateWithContext:(id)arg0;

@end
