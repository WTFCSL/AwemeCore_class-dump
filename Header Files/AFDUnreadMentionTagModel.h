//
//     Generated by private class-dump
//

@class NSArray, NSAttributedString, UIColor;

@interface AFDUnreadMentionTagModel : NSObject {
    BOOL _needArrowIcon;
    NSArray *_avatarURLs;
    NSAttributedString *_text;
    UIColor *_backgroundColor;
    UIColor *_textColor;
}

@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL needArrowIcon;

- (id)avatarURLs;
- (void)setAvatarURLs:(id)arg0;
- (void)setNeedArrowIcon:(BOOL)arg0;
- (BOOL)needArrowIcon;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;

@end
