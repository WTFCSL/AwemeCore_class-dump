//
//     Generated by private class-dump
//

@class NSString, UIImage, NSURL;

@protocol AWECrossFlowPopViewControllerProtocol <NSObject>

@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ openHandler;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageUrl;
@property (nonatomic) BOOL checked;
@property (nonatomic) unsigned long long type;

- (void)setAppName:(id)arg0;
- (id)appName;
- (BOOL)checked;
- (void)setCancelHandler:(id /* block */)arg0;
- (id)image;
- (unsigned long long)type;
- (id)content;
- (void)setType:(unsigned long long)arg0;
- (void)setImage:(id)arg0;
- (void)setContent:(id)arg0;
- (void)setChecked:(BOOL)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id /* block */)cancelHandler;
- (id /* block */)openHandler;
- (void)setOpenHandler:(id /* block */)arg0;

@end
