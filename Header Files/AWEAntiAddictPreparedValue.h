//
//     Generated by private class-dump
//

@class NSString, NSDateInterval;

@interface AWEAntiAddictPreparedValue : MTLModel <MTLJSONSerializing> {
    BOOL _expired;
    BOOL _persistence;
    id _value;
    NSDateInterval *_validDateInterval;
}

@property (retain) id value;
@property BOOL expired;
@property BOOL persistence;
@property (retain) NSDateInterval *validDateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preparedValueWithValue:(id)arg0 expired:(BOOL)arg1 persistence:(BOOL)arg2;
+ (id)preparedValueWithValue:(id)arg0 validDateInterval:(id)arg1;

- (id)initWithValue:(id)arg0 expired:(BOOL)arg1 persistence:(BOOL)arg2;
- (void)setValidDateInterval:(id)arg0;
- (BOOL)persistence;
- (void).cxx_destruct;
- (id)value;
- (void)setPersistence:(BOOL)arg0;
- (void)setValue:(id)arg0;
- (void)setExpired:(BOOL)arg0;
- (BOOL)expired;
- (id)validDateInterval;

@end