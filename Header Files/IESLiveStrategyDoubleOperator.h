//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveStrategyDoubleOperator : NSObject <Operator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInputValue:(id)arg0 equalTo:(id)arg1;
- (BOOL)isInputValue:(id)arg0 notEqualTo:(id)arg1;
- (BOOL)allNot;
- (BOOL)excuteChValue:(id)arg0 withInputValue:(id)arg1 op:(id)arg2;
- (BOOL)isInputValue:(id)arg0 GreaterThan:(id)arg1;
- (BOOL)isInputValue:(id)arg0 LessThan:(id)arg1;
- (BOOL)isInputValue:(id)arg0 GreaterOrEqualTo:(id)arg1;
- (BOOL)isInputValue:(id)arg0 LesserOrEqualTo:(id)arg1;
- (BOOL)all;

@end