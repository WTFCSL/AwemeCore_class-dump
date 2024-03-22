//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface ToygerUploadConfig : ToygerBaseModel {
    NSString *_minquality;
    NSString *_upload_compress_rate;
    NSString *_mode;
    NSNumber *_desiredWidth;
    NSString *_log_classifier;
    NSArray *_collection;
}

@property (copy, nonatomic) NSString *minquality;
@property (copy, nonatomic) NSString *upload_compress_rate;
@property (copy, nonatomic) NSString *mode;
@property (retain, nonatomic) NSNumber *desiredWidth;
@property (copy, nonatomic) NSString *log_classifier;
@property (copy, nonatomic) NSArray *collection;

- (void)setUpload_compress_rate:(id)arg0;
- (void)setLog_classifier:(id)arg0;
- (id)minquality;
- (void)setMinquality:(id)arg0;
- (id)upload_compress_rate;
- (id)log_classifier;
- (void)setCollection:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)mode;
- (void)setMode:(id)arg0;
- (id)collection;
- (id)desiredWidth;
- (void)setDesiredWidth:(id)arg0;

@end