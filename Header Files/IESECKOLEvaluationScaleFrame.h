//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECKOLEvaluationScaleFrame : MTLModel <MTLJSONSerializing> {
    NSNumber *_scaleX;
    NSNumber *_scaleY;
    NSNumber *_scaleWidth;
    NSNumber *_scaleHeight;
}

@property (retain, nonatomic) NSNumber *scaleX;
@property (retain, nonatomic) NSNumber *scaleY;
@property (retain, nonatomic) NSNumber *scaleWidth;
@property (retain, nonatomic) NSNumber *scaleHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)scaleWidth;
- (id)scaleHeight;
- (void)setScaleWidth:(id)arg0;
- (void)setScaleHeight:(id)arg0;
- (void).cxx_destruct;
- (id)scaleX;
- (id)scaleY;
- (void)setScaleX:(id)arg0;
- (void)setScaleY:(id)arg0;

@end
