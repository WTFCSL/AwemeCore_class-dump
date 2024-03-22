//
//     Generated by private class-dump
//

@class UIButton, DUXSelectPopover;

@interface AWERVResolutionElement : AWERelatedVideoPlayBaseElement {
    UIButton *_resolutionButton;
    unsigned long long _currentResolution;
    DUXSelectPopover *_resolutionSelectPopover;
}

@property (retain, nonatomic) UIButton *resolutionButton;
@property (nonatomic) unsigned long long currentResolution;
@property (weak, nonatomic) DUXSelectPopover *resolutionSelectPopover;

+ (Class)aAWEPadRTVAdapterClass;

- (void)initializeElement;
- (void)bindEvent;
- (id)aAWEPadRTVAdapter;
- (void)refreshResolutionButton:(unsigned long long)arg0;
- (id)resolutionButton;
- (void)setResolutionButton:(id)arg0;
- (id)resolutionSelectPopover;
- (void)setResolutionSelectPopover:(id)arg0;
- (void)showResolutionSelectView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (unsigned long long)currentResolution;
- (void)setCurrentResolution:(unsigned long long)arg0;

@end