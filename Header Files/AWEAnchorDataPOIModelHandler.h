//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAnchorDataPOIModelHandler : NSObject <AWEAnchorDataModelHandlerProtocol, AWEAnchorOtherDataForPOIProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)internalAnchorContentDataWithAnchorInfo:(id)arg0;
+ (id)p_prefixTagWithAnchorInfo:(id)arg0;
+ (id)p_contentTagWithAnchorInfo:(id)arg0;
+ (id)p_suffixTagWithAnchorInfo:(id)arg0;
+ (id)p_dealWithMinorTags:(id)arg0;
+ (id)p_changeTagsToNomalStyle:(id)arg0;
+ (id)dataStringForPoiTagWithAnchorInfo:(id)arg0;
+ (id)dataStringForDetailValidWithAnchorInfo:(id)arg0;

@end