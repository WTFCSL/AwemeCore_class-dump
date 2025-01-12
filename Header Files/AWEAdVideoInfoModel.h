//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEAdVideoInfoModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSString *_dashVideoModel;
    NSNumber *_groupID;
}

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *dashVideoModel;
@property (retain, nonatomic) NSNumber *groupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)dashVideoModel;
- (void)setDashVideoModel:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (id)height;
- (id)duration;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (void)setDuration:(id)arg0;

@end
