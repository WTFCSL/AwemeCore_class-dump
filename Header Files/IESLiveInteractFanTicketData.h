//
//     Generated by private class-dump
//

@class UIColor, NSString, NSMutableDictionary, IESLiveInteractUserFanticketStatus, NSNumber;

@interface IESLiveInteractFanTicketData : NSObject {
    NSString *_score;
    IESLiveInteractUserFanticketStatus *_status;
    NSNumber *_style_type;
    NSNumber *_hidden;
    UIColor *_backgroundColor;
    UIColor *_animateBgColor;
    NSString *_iconUrl;
    NSMutableDictionary *_fantickets;
}

@property (retain, nonatomic) NSMutableDictionary *fantickets;
@property (copy, nonatomic) NSString *score;
@property (retain, nonatomic) IESLiveInteractUserFanticketStatus *status;
@property (retain, nonatomic) NSNumber *style_type;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *animateBgColor;
@property (copy, nonatomic) NSString *iconUrl;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)style_type;
- (void)setStyle_type:(id)arg0;
- (void)processData;
- (id)animateBgColor;
- (void)setFantickets:(id)arg0;
- (id)fantickets;
- (void)setAnimateBgColor:(id)arg0;
- (void)merge:(id)arg0;
- (id)init;
- (void)setScore:(id)arg0;
- (id)score;
- (void).cxx_destruct;
- (id)status;
- (BOOL)remove:(int)arg0;
- (void)setStatus:(id)arg0;
- (id)backgroundColor;
- (id)description;
- (void)setHidden:(id)arg0;
- (id)hidden;
- (void)setBackgroundColor:(id)arg0;

@end
