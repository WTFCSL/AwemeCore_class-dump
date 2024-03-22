//
//     Generated by private class-dump
//

@class NSString;

@interface AWELocationDisplayTextGenerator : NSObject <AWELocationDisplayTextGeneratorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailLocationDisplayTextWithCountryCode:(id)arg0 country:(id)arg1 province:(id)arg2 city:(id)arg3 district:(id)arg4;
- (id)locationDisplayTextWithCountryCode:(id)arg0 country:(id)arg1 province:(id)arg2 city:(id)arg3 district:(id)arg4 location:(id)arg5;
- (void)appendLocationSegment:(id)arg0 toDisplayText:(id)arg1;
- (id)locationDisplayTextWithCountryCode:(id)arg0 country:(id)arg1 province:(id)arg2 city:(id)arg3 district:(id)arg4;

@end
