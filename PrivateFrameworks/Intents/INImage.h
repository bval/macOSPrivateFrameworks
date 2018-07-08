//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableObject.h"
#import "INImageExport.h"
#import "INImageProxyInjecting.h"
#import "INKeyImageProducing.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString, NSURL;

@interface INImage : NSObject <INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    CDStruct_8caa76fc _imageSize;
}

+ (BOOL)supportsSecureCoding;
+ (id)_classesInCluster;
+ (id)_bundleImageWithURL:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (id)imageWithURL:(id)arg1;
+ (void)registerImageLoadersOnce;
+ (void)initialize;
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, setter=_setImageSize:) CDStruct_8caa76fc _imageSize; // @synthesize _imageSize;
@property(copy, nonatomic, setter=_setIdentifier:) NSString *_identifier; // @synthesize _identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryRepresentation;
- (id)_descriptionAtIndent:(unsigned long long)arg1;
- (id)_description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL _isEligibleForProxying;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (id)_preferredImageLoader;
@property(copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;
@property(copy, nonatomic, setter=_setName:) NSString *_name;
@property(copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property(copy, nonatomic, setter=_setImageData:) NSData *_imageData;
- (void)_requestProxy:(CDUnknownBlockType)arg1;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL _requiresRetrieval;
- (id)_initWithData:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_in_writeableFilePersistenceConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

