//
//     Generated by private class-dump
//

@class NSString, UIColor, UIImage;

@interface AWEIronManLiveAnchorConfig : NSObject {
    BOOL _needSnapshot;
    long long _operationType;
    NSString *_title;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIImage *_image;
}

@property (nonatomic) long long operationType;
@property (nonatomic) BOOL needSnapshot;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIImage *image;

- (void)setNeedSnapshot:(BOOL)arg0;
- (BOOL)needSnapshot;
- (long long)operationType;
- (id)init;
- (void).cxx_destruct;
- (id)image;
- (id)title;
- (void)setImage:(id)arg0;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setOperationType:(long long)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;
- (void)setTitle:(id)arg0;

@end
