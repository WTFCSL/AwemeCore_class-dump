//
//     Generated by private class-dump
//

@class AWEBasicModeFeedVideoButton;

@interface AWEBasicModeRightButtonElement : AWEBasicModeFakeElement {
    AWEBasicModeFeedVideoButton *_actionButton;
    unsigned long long _type;
}

@property (retain, nonatomic) AWEBasicModeFeedVideoButton *actionButton;
@property (nonatomic) unsigned long long type;

- (void)p_setup;
- (id)initWithRightButtonType:(unsigned long long)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;

@end
