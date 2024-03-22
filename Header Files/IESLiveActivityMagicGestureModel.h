//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveActivityMagicGestureModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *actionSchema;
@property (retain, nonatomic) NSString *effectId;
@property (nonatomic) double gesturePointX;
@property (nonatomic) double gesturePointY;
@property (nonatomic) double radius;
@property (nonatomic) long long anchorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;

@end
