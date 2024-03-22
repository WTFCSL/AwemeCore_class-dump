//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface AFDMomentEntryViewModel : NSObject {
    BOOL _iconNeedShadow;
    BOOL _enableNewCloseFriendsMoment;
    unsigned long long _style;
    NSString *_imageName;
    UIImage *_image;
    NSString *_text;
    unsigned long long _iconTheme;
    unsigned long long _iconSource;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL iconNeedShadow;
@property (nonatomic) unsigned long long iconTheme;
@property (nonatomic) unsigned long long iconSource;
@property (nonatomic) BOOL enableNewCloseFriendsMoment;

- (BOOL)enableNewCloseFriendsMoment;
- (unsigned long long)iconTheme;
- (void)setIconTheme:(unsigned long long)arg0;
- (BOOL)iconNeedShadow;
- (void)setIconNeedShadow:(BOOL)arg0;
- (void)setEnableNewCloseFriendsMoment:(BOOL)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (void)setText:(id)arg0;
- (id)image;
- (void)setImage:(id)arg0;
- (void)setIconSource:(unsigned long long)arg0;
- (unsigned long long)iconSource;
- (id)text;
- (void)setStyle:(unsigned long long)arg0;

@end
