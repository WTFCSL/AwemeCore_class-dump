//
//     Generated by private class-dump
//

@class NSString;

@interface IESECMallXBridgeEcMallLocalImageDisplayCheckMethodResultModel : BDXBridgeModel {
    BOOL _canDisplayImage;
    NSString *_displayFailReason;
    NSString *_imagePath;
}

@property (nonatomic) BOOL canDisplayImage;
@property (copy, nonatomic) NSString *displayFailReason;
@property (copy, nonatomic) NSString *imagePath;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCanDisplayImage:(BOOL)arg0;
- (void)setDisplayFailReason:(id)arg0;
- (BOOL)canDisplayImage;
- (id)displayFailReason;
- (id)imagePath;
- (void).cxx_destruct;
- (void)setImagePath:(id)arg0;

@end