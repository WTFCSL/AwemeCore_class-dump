//
//     Generated by private class-dump
//

@class NSError, UIImage, NSMutableArray;

@interface VEAlgorithmSessionResultScanCode : NSObject {
    NSError *_error;
    UIImage *_image;
    NSMutableArray *_codeList;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSMutableArray *codeList;

- (id)codeList;
- (void)setCodeList:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg0;
- (void)setError:(id)arg0;
- (id)error;

@end
