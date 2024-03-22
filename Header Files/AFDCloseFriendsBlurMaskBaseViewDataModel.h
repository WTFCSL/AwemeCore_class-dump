//
//     Generated by private class-dump
//

@class NSArray, NSString, AFDCloseFriendsBlurMaskViewContext, UIImage;

@interface AFDCloseFriendsBlurMaskBaseViewDataModel : NSObject {
    BOOL _isExchangePostEncrypted;
    AFDCloseFriendsBlurMaskViewContext *_viewContext;
    NSArray *_maskImageURLArray;
    UIImage *_originalImage;
    NSString *_imageSecretKey;
}

@property (retain, nonatomic) AFDCloseFriendsBlurMaskViewContext *viewContext;
@property (retain, nonatomic) NSArray *maskImageURLArray;
@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) BOOL isExchangePostEncrypted;
@property (copy, nonatomic) NSString *imageSecretKey;

- (id)imageSecretKey;
- (BOOL)isExchangePostEncrypted;
- (void)setMaskImageURLArray:(id)arg0;
- (void)setIsExchangePostEncrypted:(BOOL)arg0;
- (void)setImageSecretKey:(id)arg0;
- (id)maskImageURLArray;
- (id)viewContext;
- (id)init;
- (void)setOriginalImage:(id)arg0;
- (void).cxx_destruct;
- (void)setViewContext:(id)arg0;
- (id)originalImage;

@end