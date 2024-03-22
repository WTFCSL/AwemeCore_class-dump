//
//     Generated by private class-dump
//

@class NSArray, NSAttributedString, NSString;

@interface HTSLiveImageToastNode : NSObject {
    BOOL _showMongoliaLayer;
    BOOL _isCoin;
    NSAttributedString *_message;
    NSArray *_imageUrlList;
    double _duration;
    NSString *_backgroundColor;
    double _width;
    double _height;
    double _cornerRadius;
}

@property (retain, nonatomic) NSAttributedString *message;
@property (retain, nonatomic) NSArray *imageUrlList;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL showMongoliaLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isCoin;

- (id)imageUrlList;
- (void)setImageUrlList:(id)arg0;
- (void)setIsCoin:(BOOL)arg0;
- (BOOL)isCoin;
- (BOOL)showMongoliaLayer;
- (void)setShowMongoliaLayer:(BOOL)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (double)height;
- (BOOL)valid;
- (double)cornerRadius;
- (id)message;
- (double)duration;
- (void)setWidth:(double)arg0;
- (id)backgroundColor;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setCornerRadius:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setDuration:(double)arg0;

@end