//
//     Generated by private class-dump
//

@class NSString;

@interface BDPHostPanelContentBaseControllerHeaderModel : BDPBasePluginModel {
    BOOL _isLottie;
    BOOL _isImg;
    NSString *_lottieFolderName;
    NSString *_lottieJsonSubPath;
    NSString *_lottieFilePath;
    NSString *_lottieWebUrl;
    NSString *_imgWebUrl;
    double _imgHeightPerWidthRadio;
}

@property (readonly, nonatomic) BOOL isLottie;
@property (readonly, copy, nonatomic) NSString *lottieFolderName;
@property (readonly, copy, nonatomic) NSString *lottieJsonSubPath;
@property (readonly, copy, nonatomic) NSString *lottieFilePath;
@property (readonly, copy, nonatomic) NSString *lottieWebUrl;
@property (readonly, nonatomic) BOOL isImg;
@property (readonly, copy, nonatomic) NSString *imgWebUrl;
@property (readonly, nonatomic) double imgHeightPerWidthRadio;

- (BOOL)isImg;
- (id)lottieFilePath;
- (BOOL)isLottie;
- (id)initWithImgWebUrl:(id)arg0 heightPerWidthRadio:(double)arg1;
- (id)initWithLottieFolderName:(id)arg0 jsonSubPath:(id)arg1 webUrl:(id)arg2;
- (id)imgWebUrl;
- (id)initWithLottieFilePath:(id)arg0;
- (id)lottieFolderName;
- (id)lottieJsonSubPath;
- (id)lottieWebUrl;
- (double)imgHeightPerWidthRadio;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
