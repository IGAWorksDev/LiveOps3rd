Pod::Spec.new do |s|
s.name         = "IgaworksLiveOps3rd"
s.version      = "0.1.1"
s.summary      = "IgaworksLiveOps3rd.framework"
s.homepage     = "https://github.com/IGAWorksDev/LiveOps3rd"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
All text and design is copyright 2006-2015 igaworks, Inc.

All rights reserved.

https://github.com/IGAWorksDev/LiveOps3rd
LICENSE
}

s.platform = :ios, '6.0'
s.author       = { "john-igaw" => "john@igaworks.com" }
s.source       = { :git => "https://github.com/IGAWorksDev/LiveOps3rd.git", :tag => "#{s.version}" }
s.ios.vendored_frameworks = 'IgaworksLiveOps3rd.framework'
s.frameworks = 'UserNotifications'
s.libraries = 'xml2'
s.xcconfig     = { 'HEADER_SEARCH_PATHS' => '"$(SDKROOT)/usr/include/libxml2"' }
end
