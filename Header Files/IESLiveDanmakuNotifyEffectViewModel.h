//
//     Generated by private class-dump
//

@class NSArray, NSAttributedString;

@interface IESLiveDanmakuNotifyEffectViewModel : NSObject {
    NSArray *_backgroundImageURLS;
    NSArray *_backgroundColors;
    NSArray *_flexSetting;
    double _danmakuHeight;
    NSAttributedString *_content;
    id _message;
}

@property (copy, nonatomic) NSArray *backgroundImageURLS;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (copy, nonatomic) NSArray *flexSetting;
@property (nonatomic) double danmakuHeight;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) id message;

- (id)flexSetting;
- (void)setFlexSetting:(id)arg0;
- (double)danmakuHeight;
- (id)backgroundImageURLS;
- (void)setBackgroundImageURLS:(id)arg0;
- (void)setDanmakuHeight:(double)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)message;
- (void)setContent:(id)arg0;
- (id)backgroundColors;
- (void)setBackgroundColors:(id)arg0;

@end
