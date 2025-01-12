//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSObject;

@interface IESFeatureInputData : NSObject <NSCopying> {
    NSString *_scene;
    NSString *_modelID;
    NSString *_enterFrom;
    NSObject *_model;
    NSDictionary *_importantFeatures;
    unsigned long long _uploadType;
}

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSObject *model;
@property (copy, nonatomic) NSDictionary *importantFeatures;
@property (nonatomic) unsigned long long uploadType;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setImportantFeatures:(id)arg0;
- (void)setUploadType:(unsigned long long)arg0;
- (id)importantFeatures;
- (void)setModelID:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)modelID;
- (id)scene;
- (unsigned long long)uploadType;

@end
