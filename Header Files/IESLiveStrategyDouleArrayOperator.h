//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveStrategyDouleArrayOperator : NSObject <Operator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allNot;
- (BOOL)excuteChValue:(id)arg0 withInputValue:(id)arg1 op:(id)arg2;
- (BOOL)isInputValue:(id)arg0 rangeIn:(id)arg1;
- (BOOL)isInputValue:(id)arg0 notRangeIn:(id)arg1;
- (BOOL)isInputValue:(id)arg0 contains:(id)arg1;
- (BOOL)isInputValue:(id)arg0 notContains:(id)arg1;
- (BOOL)all;

@end