//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveCartCustomAnimCancelActionModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSingleRoom;
    BOOL _isNaturalTime;
    long long _actionType;
    long long _period;
}

@property (nonatomic) long long actionType;
@property (nonatomic) BOOL isSingleRoom;
@property (nonatomic) long long period;
@property (nonatomic) BOOL isNaturalTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isNaturalTime;
- (void)setIsNaturalTime:(BOOL)arg0;
- (BOOL)isSingleRoom;
- (void)setIsSingleRoom:(BOOL)arg0;
- (long long)period;
- (void)setActionType:(long long)arg0;
- (long long)actionType;
- (void)setPeriod:(long long)arg0;

@end
