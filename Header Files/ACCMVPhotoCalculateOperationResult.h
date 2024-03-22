//
//     Generated by private class-dump
//

@class VEAIMomentBIMResult, NSDictionary, NSString, NSError;

@interface ACCMVPhotoCalculateOperationResult : NSObject {
    VEAIMomentBIMResult *_bimResult;
    unsigned long long _orientation;
    NSDictionary *_imageExif;
    NSString *_videoModelString;
    NSString *_videoCreateDateString;
    NSError *_error;
}

@property (retain, nonatomic) VEAIMomentBIMResult *bimResult;
@property (nonatomic) unsigned long long orientation;
@property (retain, nonatomic) NSDictionary *imageExif;
@property (copy, nonatomic) NSString *videoModelString;
@property (copy, nonatomic) NSString *videoCreateDateString;
@property (retain, nonatomic) NSError *error;

- (void)setVideoModelString:(id)arg0;
- (id)bimResult;
- (void)setBimResult:(id)arg0;
- (id)imageExif;
- (id)videoModelString;
- (id)videoCreateDateString;
- (void)setImageExif:(id)arg0;
- (void)setVideoCreateDateString:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)orientation;
- (void)setOrientation:(unsigned long long)arg0;
- (void)setError:(id)arg0;
- (id)error;

@end