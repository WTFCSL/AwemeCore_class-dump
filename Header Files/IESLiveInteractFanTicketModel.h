//
//     Generated by private class-dump
//

@class UIColor, NSString, IESLiveInteractUserFanticketStatus, NSNumber;

@interface IESLiveInteractFanTicketModel : NSObject {
    int _level;
    NSString *_score;
    IESLiveInteractUserFanticketStatus *_status;
    NSNumber *_style_type;
    NSNumber *_hidden;
    UIColor *_backgroundColor;
    UIColor *_animateBgColor;
    NSString *_iconUrl;
}

@property (nonatomic) int level;
@property (copy, nonatomic) NSString *score;
@property (retain, nonatomic) IESLiveInteractUserFanticketStatus *status;
@property (retain, nonatomic) NSNumber *style_type;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *animateBgColor;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)modelWithLevel:(int)arg0 score:(id)arg1 quickInteract:(id)arg2 flashAnimation:(id)arg3;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)style_type;
- (void)setStyle_type:(id)arg0;
- (id)animateBgColor;
- (void)setAnimateBgColor:(id)arg0;
- (void)merge:(id)arg0;
- (void)setLevel:(int)arg0;
- (void)setScore:(id)arg0;
- (int)level;
- (id)score;
- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)arg0;
- (id)backgroundColor;
- (void)setHidden:(id)arg0;
- (id)hidden;
- (void)setBackgroundColor:(id)arg0;

@end
